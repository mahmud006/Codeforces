#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int c1 = 0, c2 = 0,flg=0;
    char mn,mx,md;
    //1
    if (s1[0] == 'A')
    {
        if (s1[1] == '>')
        {
            c1++;
        }
        else if(s1[1]=='<')
        {
            c2++;
        }
    }
    if (s1[2] == 'A')
    {
        if (s1[1] == '>')
        {
            c2++;
        }
        else if(s1[1]=='<')
        {
            c1++;
        }
    }
    //2
    if (s2[0] == 'A')
    {
        if (s2[1] == '>')
        {
            c1++;
        }
        else if(s2[1]=='<')
        {
            c2++;
        }
    }
    if (s2[2] == 'A')
    {
        if (s2[1] == '>')
        {
            c2++;
        }
        else if(s2[1]=='<')
        {
            c1++;
        }
    }
    //3
    if (s3[0] == 'A')
    {
        if (s3[1] == '>')
        {
            c1++;
        }
        else if(s3[1]=='<')
        {
            c2++;
        }
    }
    if (s3[2] == 'A')
    {
        if (s3[1] == '>')
        {
            c2++;
        }
        else if(s3[1]=='<')
        {
            c1++;
        }
    }
    //cout << c1 <<c2<<endl;
    if(c1>c2 && c1==2)
    {
        mx = 'A';
    }
    else if(c1==c2 && c1==1)
    {
        md = 'A';
    }
    else if(c1<c2 && c2==2)
    {
        mn = 'A';
    }
    else
    {
        flg++;
    }

    //B
    //1
    int c3=0,c4=0;
    if (s1[0] == 'B')
    {
        if (s1[1] == '>')
        {
            c3++;
        }
        else if(s1[1]=='<')
        {
            c4++;
        }
    }
    if (s1[2] == 'B')
    {
        if (s1[1] == '>')
        {
            c4++;
        }
        else if(s1[1]=='<')
        {
            c3++;
        }
    }
    //2
    if (s2[0] == 'B')
    {
        if (s2[1] == '>')
        {
            c3++;
        }
        else if(s2[1]=='<')
        {
            c4++;
        }
    }
    if (s2[2] == 'B')
    {
        if (s2[1] == '>')
        {
            c4++;
        }
        else if(s2[1]=='<')
        {
            c3++;
        }
    }
    //3
    if (s3[0] == 'B')
    {
        if (s3[1] == '>')
        {
            c3++;
        }
        else if(s3[1]=='<')
        {
            c4++;
        }
    }
    if (s3[2] == 'B')
    {
        if (s3[1] == '>')
        {
            c4++;
        }
        else if(s3[1]=='<')
        {
            c3++;
        }
    }
    //cout << c1 <<c2<<endl;
    if(c3>c4 && c3==2)
    {
        mx = 'B';
    }
    else if(c3==c4 && c3==1)
    {
        md = 'B';
    }
    else if(c3<c4 && c4==2)
    {
        mn = 'B';
    }
    else
    {
        flg++;
    }

    //C
    //1
    int c5=0,c6=0;
    if (s1[0] == 'C')
    {
        if (s1[1] == '>')
        {
            c5++;
        }
        else if(s1[1]=='<')
        {
            c6++;
        }
    }
    if (s1[2] == 'C')
    {
        if (s1[1] == '>')
        {
            c6++;
        }
        else if(s1[1]=='<')
        {
            c5++;
        }
    }
    //2
    if (s2[0] == 'C')
    {
        if (s2[1] == '>')
        {
            c5++;
        }
        else if(s2[1]=='<')
        {
            c6++;
        }
    }
    if (s2[2] == 'C')
    {
        if (s2[1] == '>')
        {
            c6++;
        }
        else if(s2[1]=='<')
        {
            c5++;
        }
    }
    //3
    if (s3[0] == 'C')
    {
        if (s3[1] == '>')
        {
            c5++;
        }
        else if(s3[1]=='<')
        {
            c6++;
        }
    }
    if (s3[2] == 'C')
    {
        if (s3[1] == '>')
        {
            c6++;
        }
        else if(s3[1]=='<')
        {
            c5++;
        }
    }
    //cout << c1 <<c2<<endl;
    if(c5>c6 && c5==2)
    {
        mx = 'C';
    }
    else if(c5==c6 && c5==1)
    {
        md = 'C';
    }
    else if(c5<c6 && c6==2)
    {
        mn = 'C';
    }
    else
    {
        flg++;
    }

    if(flg>0)
    {
        cout << "Impossible" <<endl;
    }
    else if(c1==c2 && c3==c4 && c5==c6)
    {
        cout << "Impossible" <<endl;
    }
    else
    {
        cout << mn <<md<<mx <<endl;
    }
    

    
}