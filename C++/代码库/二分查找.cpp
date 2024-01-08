#include <iostream>
using namespace std;

// ���ֲ���
int binarySearch(int* nums, int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = (right + left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

// ����
int main() {
    int nums[] = { 1, 3, 5, 7, 9, 10 };
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 5;
    int index = binarySearch(nums, n, target);
    if (index == -1) {
        cout << "δ�ҵ�Ŀ��ֵ" << endl;
    } else {
        cout << "Ŀ��ֵ�ڵ�" << index + 1 << "��λ��" << endl;
    }
    return 0;
}

