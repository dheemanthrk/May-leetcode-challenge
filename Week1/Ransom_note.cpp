class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> mp;
        for (auto a : magazine)
            mp[a]++;

        for (auto a : ransomNote)
        {
            if (mp.find(a) == mp.end())
                return false;
            else
            {
                mp[a]--;
                if (mp[a] == 0)
                    mp.erase(a);
            }
        }
        return true;
    }
};