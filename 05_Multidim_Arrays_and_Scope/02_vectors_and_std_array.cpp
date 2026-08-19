# include <iostream>
# include <vector>
# include <array>

using namespace std;

int main(){


    // vector<int> nums = {10, 20, 30, 40};
    // vector<int> nums2 {100,200, 300, 400};
    // vector<int> nums3(4, 50);

    // for(int i=0;i<nums.size(); i++)
    //     cout << nums.at(i) << " ";

    // cout << endl;

    // cout << "=========================" << endl;


    // for(int i=0;i<nums.size(); i++)
    //     cout << nums2.at(i) << " ";


    // cout << "=========================" << endl;


    // for(int i=0;i<nums.size(); i++)
    //     cout << nums3.at(i) << " ";


    // cout << "=========================" << endl;

    // cout << "Number Of Elements is : "  << nums3.size() << endl;


    // nums3.push_back(1000);

    // cout << "Number Of Elements is : "  << nums3.size() << endl;

    // nums3.at(0) = 1000;


    // for(int i=0;i<nums.size(); i++)
    //     cout << nums3.at(i) << " ";


    int nums[] = {10, 20, 30};
    cout << nums[2] << endl;

    array<int, 4> numsarr = {1, 2, 3};
    cout << numsarr[2] << endl;
    numsarr[3] = 100;
    cout << numsarr[3] << endl;

    


    return 0;
}