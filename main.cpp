#include <iostream>
#include <string>

using namespace std;

void FooBaa()
{
    for(unsigned int i = 1; i <= 100; i++)
    {
        string fooBaa = "";
        if(i % 3 == 0)
        {
            fooBaa = "Foo";
        }
        if(i % 5 == 0)
        {
            fooBaa += "Baa";
        }
        if(!fooBaa.empty())
        {
            cout << fooBaa << "\n";
        }
        else
        {
            cout << i << "\n";
        }
    }
}

int main()
{
    FooBaa();

    return 0;
}
