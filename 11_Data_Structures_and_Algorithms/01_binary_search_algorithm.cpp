#include <iostream>

int binarysearch(int sortedArr[], int size, int target);


using namespace std;

int main() {
    
    const int size = 10;
    int sortedArr[size] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    
    int target = 18;
    int targetindex = binarysearch(sortedArr, size, target);
    
    targetindex == -1 ? cout << "Not Found\n" : cout << "Found At Index : " << targetindex << endl;

    return 0;
}

int binarysearch(int sortedArr[], int size, int target)
{
    int lowindex = 0;
    int highindex = size - 1;
    
    while(lowindex<=highindex){
        
        int midindex = (lowindex + highindex)/2;
        if(sortedArr[midindex] == target)
            return midindex;
        
        if(sortedArr[midindex] < target)
            lowindex = midindex+1;
        
        else
            highindex = midindex-1;
    }
    
    return -1;
}