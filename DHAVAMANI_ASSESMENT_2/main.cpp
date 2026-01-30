#include <iostream>
#include <list>
using namespace std;

template <typename T>
class Queue
{
private:
    list<T> q;

public:
    bool empty() const
    {
        return q.empty();
    }

    int size() const
    {
        return q.size();
    }

    void push(const T& value)
    {
        q.push_back(value);
    }

    void pop()
    {
        if (!empty())
            q.pop_front();
        else
            cout << "Queue is empty\n";
    }

    T front() const
    {
        if (!empty())
            return q.front();
        throw runtime_error("Queue is empty");
    }

    T back() const
    {
        if (!empty())
            return q.back();
        throw runtime_error("Queue is empty");
    }

    void swap(Queue<T>& other)
    {
        q.swap(other.q);
    }

    void print() const
    {
        if (empty())
        {
            cout << "Queue is empty\n";
            return;
        }
        for (const auto& e : q)
            cout << e << " ";
        cout << endl;
    }
};

int main()
{
    Queue<int> q1, q2;

    q1.push(10);
    q1.push(20);
    q1.push(30);

    cout << "Queue 1: ";
    q1.print();

    cout << "Front: " << q1.front() << endl;
    cout << "Back: " << q1.back() << endl;

    q1.pop();
    cout << "After pop: ";
    q1.print();

    q2.push(100);
    q2.push(200);

    q1.swap(q2);

    cout << "Queue 1 after swap: ";
    q1.print();

    cout << "Queue 2 after swap: ";
    q2.print();

    return 0;
}
