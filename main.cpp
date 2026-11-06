#include <iostream>
using namespace std;
class Relu
{
private:
    int relu(int sum)
    {
        if (sum > 0)
            return sum;

        else
            return 0;
    }

public:
    int active(int val)
    {
        return relu(val);
    }
};

class inputlayer
{
private:
    static const int n = 5; // number of inputs
    int a[n];
    int w[n];
    int b;
    int sum;

public:
    inputlayer()
    {
        sum = 0;
        b = 5;
        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            w[i] = 1;
        }
    }
    int Calculation()
    {
        cout << "Enter the values for input layer";
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the value number: " << i << endl;
            cin >> a[i];
        }
        return 0;
    }
    int summation()
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + w[i] * a[i];
        }
        sum = sum + b;
        return sum;
    }
    int final()
    {
        Relu r;
        int output = r.active(sum);
        return output;
    }
};

int main()
{
    inputlayer in;
    in.Calculation();
    int sum = in.summation();
    int output = in.final();
    cout << "Final output: " << output << endl;
    return 0;
}