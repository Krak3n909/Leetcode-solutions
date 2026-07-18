class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {

        double maxArea = -1;

        for(int i = 0;i < points.size() - 2;i++)
        {
            for(int j = i + 1;j < points.size() - 1;j++)
            {
                for(int k = j + 1;k < points.size() - 0;k++)
                {
                    double a = sqrt((points[i][0] - points[j][0]) * (points[i][0] - points[j][0]) + (points[i][1] - points[j][1]) * (points[i][1] - points[j][1]));
                    
                    double b = sqrt((points[k][0] - points[j][0]) * (points[k][0] - points[j][0]) + (points[k][1] - points[j][1]) * (points[k][1] - points[j][1]));

                    
                    double c = sqrt((points[i][0] - points[k][0]) * (points[i][0] - points[k][0]) + (points[i][1] - points[k][1]) * (points[i][1] - points[k][1]));

                    double s = (a + b + c) / 2;

                    double area = s * (s - a) * (s - b) * (s - c);
                    area = sqrt(area);
                    maxArea = max(maxArea, area);
                }
            }
        }
        return maxArea;
    }
};