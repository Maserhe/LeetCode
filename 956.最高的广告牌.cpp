/*
 * @lc app=leetcode.cn id=956 lang=cpp
 *
 * [956] 最高的广告牌
 */

// @lc code=start
class Solution {
private:
	vector<int> rods;
	vector<int> remain;
	int n;
	int maxheight;
	int halfmaxheight;
	int ans;

	void DFS(int index, int leftheight,int rightheight) {
		if (leftheight == rightheight) { ans = max(ans, leftheight); }
		if (abs(leftheight - rightheight) > remain[index]) { return; }
		if ((leftheight + rightheight + remain[index]) <= ans + ans) { return; }
		//if (leftheight > halfmaxheight || rightheight > halfmaxheight) { return; }
		for (int i = index; i < n; i++) {
			DFS(i+1,leftheight+rods[i],rightheight);
			DFS(i+1, leftheight, rightheight + rods[i]);
            //DFS(i+1,leftheight,rightheight);
		}
	}

public:
	int tallestBillboard(vector<int>& rods) {
		this->rods = rods;
		n = rods.size();
		sort(this->rods.begin(), this->rods.end(), greater<int>());
		remain = vector<int>(n + 1, 0);
		remain[n] = 0;
		for (int i = n - 1; i >= 0; i--) {
			remain[i] = remain[i + 1] + this->rods[i];
		}

		maxheight = remain[0];
		halfmaxheight = maxheight >> 1;
		ans = 0;
		DFS(0, 0,0);

		return ans;
	}
};
// @lc code=end