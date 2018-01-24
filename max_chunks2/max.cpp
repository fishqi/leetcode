#include <iostream>
#include <vector>

using namespace std;

//最大的比最小的小或者相等表示left——part可以用了
int solution(const vector<int> &v)
{
				int ans = 0;
				for(int i=0; i<v.size(); i++)
				{
								int max = -1;
								int min = 999999;
								for(int j=0; j<=i; j++)
								{
												max = std::max(max, v[j]);
								}

								for(int j=i+1; j<v.size(); j++)
								{
												min = std::min(min, v[j]);
								}
								if(max<=min)
								{
												ans++;
								}
				}
				return ans;
}

int main()
{
				vector<int> v;
				v.push_back(4);
				v.push_back(2);
				v.push_back(2);
				v.push_back(1);
				v.push_back(1);
				cout << solution(v) << endl;
}
