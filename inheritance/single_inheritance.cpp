#include<iostream>
using namespace std;
class square
{
    private:
        int number;
    public:
        int getsquare(int number)
        {
            int result = number*number;
            return result;
        }
};
class cube : public square
{
    public:
        int getcube(int number)
        {
            int result = getsquare(number)*number;
            return result;
        }
};

int main()
{
    cube c1;
    cout<<"square is :"<<c1.getsquare(8)<<endl;
    cout<<"cube is :"<<c1.getcube(8)<<endl;
    return 0;
}