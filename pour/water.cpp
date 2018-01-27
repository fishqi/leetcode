#include <iostream>
#include <vector>

using namespace std;

class Solution {
				public:
								vector<int> pourWater(vector<int>& heights, int V, int K) 
								{
												for(int j=0; j<V; j++)
												{
																int temp = heights[K];
																int min_index = K;
																for(int i=K-1; i>=0; i--)
																{
																				if(heights[i]>temp)
																				{
																								break;
																				}
																				if(heights[i]<temp)
																				{
																								temp = heights[i];
																								min_index = i;
																				}
																}
																if(min_index == K)
																{
																				for(int i=K+1; i<heights.size(); i++)
																				{
																								if(heights[i]>temp)
																								{
																												break;
																								}
																								if(heights[i]<temp)
																								{
																												temp = heights[i];
																												min_index = i;
																								}
																				}
																}
																heights[min_index]++;
																cout << "min_index is " << min_index << endl;
												}
								}	
};

int main()
{
				vector<int> v;
				v.push_back(1);
				v.push_back(2);
				v.push_back(3);
				v.push_back(4);
				v.push_back(3);
				v.push_back(2);
				v.push_back(1);
				v.push_back(2);
				v.push_back(3);
				v.push_back(4);
				v.push_back(3);
				Solution s;
				vector<int> v_r = s.pourWater(v, 2, 2);
				for(int i=0; i<v_r.size(); i++)
				{
								cout << v_r[i] << endl;
				}
}
