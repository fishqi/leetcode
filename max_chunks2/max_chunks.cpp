#include <iostream>
#include <vector>

using namespace std;

int max_chunks(const vector<int> &v)
{
				int ans = 0;
				int max = -1;

				for(int i=0; i<v.size(); i++)
				{
								max = std::max(max, v[i]);
								if(max == i) //当遇到最大的值等于当前坐标的时候就可以分成一块
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
				v.push_back(3);
				v.push_back(2);
				v.push_back(1);
				v.push_back(0);
				cout << max_chunks(v) << endl;
}
