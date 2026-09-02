class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int sum=INT_MIN;
        while(i<j)
        {
            sum=max(sum,min(height[j],height[i])*(j-i));
            if(height[i]<=height[j])
            {
                i++;
            }
            else 
            {
                j--;
            }
        }
            return sum;
    }

};
