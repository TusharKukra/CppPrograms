bool solve(vector<int>& nums, int k) {
        set<int> s;

        for (int x : nums) {
            if (s.find(k - x) != s.end())

                return true;

            else

                s.insert(x);
        }

        return false;
}
