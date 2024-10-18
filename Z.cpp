#include <iostream>#include <string>

using namespace std;


int main() 
{

    string a, let = "", nums1 = "", nums2 = "";
    cin >> a;
    int count = 0;
    bool sec = false;
    


    for (int i = 0; i < a.length(); i++)
    {
        if(a[i] == '+')
        {
            sec = true;
        }
        if(a[i] != '+')
        {
            let += a[i];
            count++;
        }

        if(!sec && count == 3)
        {
            if(let == "ONE") nums1 += "1";
            else if(let == "TWO") nums1 += "2";
            else if(let == "THR") nums1 += "3";
            else if(let == "FOU") nums1 += "4";
            else if(let == "FIV") nums1 += "5";
            else if(let == "SIX") nums1 += "6";
            else if(let == "SEV") nums1 += "7";
            else if(let == "EIG") nums1 += "8";
            else if(let == "NIN") nums1 += "9";
            else if(let == "ZER") nums1 += "0";
            count = 0;
            let = "";
        }
        else if(sec && count == 3)
        {
            if(let == "ONE") nums2 += "1";
            else if(let == "TWO") nums2 += "2";
            else if(let == "THR") nums2 += "3";
            else if(let == "FOU") nums2 += "4";
            else if(let == "FIV") nums2 += "5";
            else if(let == "SIX") nums2 += "6";
            else if(let == "SEV") nums2 += "7";
            else if(let == "EIG") nums2 += "8";
            else if(let == "NIN") nums2 += "9";
            else if(let == "ZER") nums2 += "0";
            count = 0;
            let = "";   
        }
       
    }

    int sum = stoi(nums1) + stoi(nums2);
    string S = to_string(sum);

    for (int i = 0; i < S.length(); i++)
    {
        let = S[i];
        if(let == "1") cout << "ONE";
        else if(let == "2") cout << "TWO";
        else if(let == "3") cout << "THR";
        else if(let == "4") cout <<"FOU";
        else if(let == "5") cout <<"FIV";
        else if(let == "6") cout << "SIX";
        else if(let == "7") cout << "SEV";
        else if(let == "8") cout << "EIG";
        else if(let == "9") cout << "NIN";
        else if(let == "0") cout << "ZER";
    }

}