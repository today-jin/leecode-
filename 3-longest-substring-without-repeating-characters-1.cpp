/*给定一个字符串，找出不含有重复字符的最长子串的长度。

示例 1:

输入: "abcabcbb"
输出: 3 
解释: 无重复字符的最长子串是 "abc"，其长度为 3。
示例 2:

输入: "bbbbb"
输出: 1
解释: 无重复字符的最长子串是 "b"，其长度为 1。
示例 3:

输入: "pwwkew"
输出: 3
解释: 无重复字符的最长子串是 "wke"，其长度为 3。
     请注意，答案必须是一个子串，"pwke" 是一个子序列 而不是子串。*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> map;
        int res=0;
        int left=0;
        for(int i = 0; i<s.size();i++)
        {
            if(map.count(s[i]))
            {
                //cout<<"map"<<endl;
                if(map[s[i]]<left)
                {
                    map[s[i]]=i;
                }
                else{
                    res=i-left > res? i-left : res;
                    left=map[s[i]]+1;
                    map[s[i]]=i; 
                    
                    //cout<<"left"<<endl;
                    //cout<<left<<endl;
                }
                
            }
            else{
                map[s[i]]=i;
            }
           
        }
        //cout<<s.size()-left<<endl;
        res=s.size()-left > res ? s.size()-left : res;
        return res;
    }
};
