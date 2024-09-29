#include<iostream>
using namespace std;

 char kthCharacter(int k) {
        int cnt = 1;
        string input = "a";
        while(cnt<=k)
        {
            string temp = "";
            for(int i=0;input[i]!='\0';i++)
            {
                char cr =  (int)input[i] + 1;
                temp += cr;

            }
            input += temp;
            cnt = input.length();
        }

        return input[k-1];
        
    }


int main()
{
    return 0;
}