#include <iostream>
using namespace std;

bool check_rotation(string s1, string s2){
    if(s1.size() != s2.size()){
        return false;
    }
    
    int i = 0;
    int h = s1.size()-1;
    while(i!= s1.size() && h != 0){
        if(s1[i] != s2[h]){
            return false;
        }
        i++;
        h--;
    }
    return true;
}

int main()
{
    string s1 = "ABCD";
    string s2 = "DCBA";
    if (check_rotation(s1, s2))
        cout << s2 << " is a rotated form of " << s1
             << endl;
    else
        cout << s2 << " is not a rotated form of " << s1
             << endl;
    string s3 = "ACBD";
    if (check_rotation(s1, s3))
        cout << s3 << " is a rotated form of " << s1
             << endl;
    else
        cout << s3 << " is not a rotated form of " << s1
             << endl;
    return 0;
}
