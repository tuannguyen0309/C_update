#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int start;
    int end;

    Interval()
    {
        this->start = 0;
        this->end = 0;
    }

    Interval(int start, int end)
    {
        this->start = start;
        this->end = end;
    }
};

bool cmp(const Interval &a, const Interval &b)
{
    return a.start < b.start;
}

void getDiscreteMeeting(vector<Interval> intervals)
{
    sort(intervals.begin(), intervals.end(), cmp);
    int n = intervals.size();
    vector<Interval> result;
    int start = intervals[0].start;
    int end = intervals[0].end;
    for (int i = 1; i < n; i++)
    {
        if (intervals[i].start <= end)
        {
            end = max(end, intervals[i].end);
        }
        else
        {
            result.push_back(Interval(start, end));
            start = intervals[i].start;
            end = intervals[i].end;
        }
    }
    result.push_back(Interval(start, end));
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i].start << " " << result[i].end << endl;
    }
}

int main()
{
    int start1[] = {1, 3, 0, 8, 5};
    int end1[] = {5, 4, 6, 9, 9};
    int n = sizeof(start1) / sizeof(start1[0]);
    vector<Interval> intervals;
    for (int i = 0; i < n; i++)
    {
        intervals.push_back(Interval(start1[i], end1[i]));
    }
    getDiscreteMeeting(intervals);

    int start2[] = {1, 3, 0, 8, 8};
    int end2[] = {5, 4, 3, 10, 9};
    n = sizeof(start2) / sizeof(start2[0]);
    intervals.clear();
    for (int i = 0; i < n; i++)
    {
        intervals.push_back(Interval(start2[i], end2[i]));
    }
    getDiscreteMeeting(intervals);
}