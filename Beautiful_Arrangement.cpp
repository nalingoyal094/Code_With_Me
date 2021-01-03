class Solution {
    int count = 0;
public:
    int countArrangement(int N)
    {
        int nums[N];
        int size=N;
        for (int i = 1; i <= N; i++)
            nums[i - 1] = i;
        permute(nums, 0,size);
        return count;
    }
    
    void permute(int nums[], int pos,int size) {
        if (pos ==size) {
            count++;
        }
        for (int i = pos; i <size; i++) {
            swap(nums, i, pos);
            if (nums[pos] % (pos + 1) == 0 || (pos + 1) % nums[pos] == 0)
                permute(nums, pos + 1,size);
            swap(nums, i, pos);
        }
    }
    
    void swap(int nums[], int x, int y) {
        int temp = nums[x];
        nums[x] = nums[y];
        nums[y] = temp;
    }

    
};
