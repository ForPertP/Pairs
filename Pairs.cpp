int pairs(int k, vector<int> arr)
{
    std::set<int> s;
    int count = 0;

    for (const auto& n : arr)
    {
        s.insert(n);
        
        if (s.find(n + k) != s.end()) count++;
        if (s.find(n - k) != s.end()) count++;
    }

    return count;
}
