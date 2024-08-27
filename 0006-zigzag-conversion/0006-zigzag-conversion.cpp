class Solution {
public:
    string convert(string s, int numRows) {
  vector<string> rows(numRows);
  if(numRows==1)return s;
   int i=0; bool flag=0;
    for(auto c:s){
        rows[i]+=c;
        if(i==0 || i==numRows-1){
            flag=!flag;
        }
        if(flag) i++;
        else
        i--;
    }
    string zigzag="";
    for(auto str:rows){
        zigzag+=str;
    }
    return zigzag;
    }
};