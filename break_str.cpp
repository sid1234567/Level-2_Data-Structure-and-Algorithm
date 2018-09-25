#include<iostream>
using namespace std;

int dictValue(string word)
{
    string dict[]={"i","love","indian","food","spicy","wicket","bats","man","keeper"};
    int size = sizeof(dict)/sizeof(dict[0]);
    for(int i=0; i < size; i++)
    {
        if(dict[i].compare(word)==0)
        {
            return true;
        }
    }
    return false;
}

bool wordCheck(string str)
{
    int size=str.size();
    if(size==0)
    {
        return true;
    }
    for(int i=1;i<=size;i++)
    {
        if(dictValue(str.substr(0,i)) && wordCheck(str.substr(i,size-1)))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    wordCheck("ilovespicy")? cout <<"true\n": cout <<"false\n";
    wordCheck("indianfoodspicy")? cout <<"true\n": cout <<"false\n";
    wordCheck("wicketkeeper")? cout <<"true\n": cout <<"false\n";
    wordCheck("bats wicket")? cout <<"true\n": cout <<"false\n";
    wordCheck("wicketkeeper")? cout <<"true\n": cout <<"false\n";
    return 0;
}
