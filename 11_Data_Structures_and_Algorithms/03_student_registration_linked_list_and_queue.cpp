#include <iostream>
#include <string>

struct Student {
    int id;
    std::string name;
    Student* next;

    Student(int i, std::string n) : id(i), name(n), next(nullptr) {}
};

class RegisteredList {
private:
    Student* head;
    int count;
    const int MAX_STUDENTS;

    Student* getTail(Student* cur) {
        while (cur != nullptr && cur->next != nullptr)
            cur = cur->next;
        return cur;
    }

    Student* partition(Student* head, Student* end, Student** newHead, Student** newEnd) {
        Student* pivot = end;
        Student* prev = nullptr;
        Student* cur = head;
        Student* tail = pivot;

        while (cur != pivot) {
            if (cur->id < pivot->id) {
                if ((*newHead) == nullptr) (*newHead) = cur;
                prev = cur;
                cur = cur->next;
            } else {
                if (prev) prev->next = cur->next;
                Student* tmp = cur->next;
                cur->next = nullptr;
                tail->next = cur;
                tail = cur;
                cur = tmp;
            }
        }

        if ((*newHead) == nullptr) (*newHead) = pivot;
        (*newEnd) = tail;
        return pivot;
    }

    Student* quickSortRecur(Student* head, Student* end) {
        if (!head || head == end)
            return head;

        Student *newHead = nullptr, *newEnd = nullptr;
        Student* pivot = partition(head, end, &newHead, &newEnd);

        if (newHead != pivot) {
            Student* tmp = newHead;
            while (tmp->next != pivot) tmp = tmp->next;
            tmp->next = nullptr;

            newHead = quickSortRecur(newHead, tmp);

            tmp = getTail(newHead);
            tmp->next = pivot;
        }

        pivot->next = quickSortRecur(pivot->next, newEnd);
        return newHead;
    }

public:
    RegisteredList(int max_students) : head(nullptr), count(0), MAX_STUDENTS(max_students) {}

    bool addStudent(int id, std::string name) {
        if (count >= MAX_STUDENTS) return false;

        Student* newStudent = new Student(id, name);
        newStudent->next = head;
        head = newStudent;
        count++;
        return true;
    }

    bool removeStudent(int id) {
        Student* temp = head;
        Student* prev = nullptr;

        while (temp) {
            if (temp->id == id) {
                if (prev) prev->next = temp->next;
                else head = temp->next;

                delete temp;
                count--;
                return true;
            }
            prev = temp;
            temp = temp->next;
        }
        return false;
    }

    void sort() {
        head = quickSortRecur(head, getTail(head));
    }

    void display() {
        Student* temp = head;
        std::cout << "Registered Students (" << count << "):\n";
        while (temp) {
            std::cout << "ID: " << temp->id << ", Name: " << temp->name << "\n";
            temp = temp->next;
        }
        std::cout << "-------------------------\n";
    }

    int getCount() { return count; }
};

// Queue باستخدام Array
class WaitingQueue {
private:
    struct StudentData {
        int id;
        std::string name;
    };

    StudentData queue[1000];  // حجم كبير لقائمة الانتظار
    int front;
    int rear;
    int count;

public:
    WaitingQueue() : front(0), rear(-1), count(0) {}

    bool enqueue(int id, std::string name) {
        if (count == 1000) return false; // قائمة الانتظار ممتلئة

        rear = (rear + 1) % 1000;
        queue[rear].id = id;
        queue[rear].name = name;
        count++;
        return true;
    }

    bool dequeue(int &id, std::string &name) {
        if (count == 0) return false; // القائمة فارغة

        id = queue[front].id;
        name = queue[front].name;
        front = (front + 1) % 1000;
        count--;
        return true;
    }

    bool isEmpty() { return count == 0; }

    void display() {
        std::cout << "Waiting Queue (" << count << "):\n";
        int idx = front;
        for (int i = 0; i < count; i++) {
            std::cout << "ID: " << queue[idx].id << ", Name: " << queue[idx].name << "\n";
            idx = (idx + 1) % 1000;
        }
        std::cout << "-------------------------\n";
    }
};

int main() {
    RegisteredList registered(80);  // الحد الأقصى 80 طالب
    WaitingQueue waiting;

    auto registerStudent = [&](int id, std::string name) {
        if (registered.addStudent(id, name)) {
            std::cout << "Student " << name << " (ID:" << id << ") registered successfully.\n";
            registered.sort();
        } else {
            waiting.enqueue(id, name);
            std::cout << "Student " << name << " (ID:" << id << ") added to waiting queue.\n";
        }
    };

    auto removeStudent = [&](int id) {
        if (registered.removeStudent(id)) {
            std::cout << "Student with ID " << id << " removed from registered list.\n";
            int newId;
            std::string newName;
            if (waiting.dequeue(newId, newName)) {
                registered.addStudent(newId, newName);
                registered.sort();
                std::cout << "Student " << newName << " (ID:" << newId << ") moved from waiting queue to registered list.\n";
            }
        } else {
            std::cout << "Student with ID " << id << " not found in registered list.\n";
        }
    };

    // اختبار بسيط
    registerStudent(102, "Ahmed");
    registerStudent(101, "Sara");
    registerStudent(105, "Omar");
    registerStudent(103, "Laila");
    registerStudent(104, "Mona");

    std::cout << "\n-- After registrations --\n";
    registered.display();
    waiting.display();

    removeStudent(101);

    std::cout << "\n-- After removal --\n";
    registered.display();
    waiting.display();

    return 0;
}
