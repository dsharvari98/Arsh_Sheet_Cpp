bool validPalindrome(string s) {
    auto mis = std::mismatch(s.begin(), s.end(), s.rbegin());
    if (mis.first == s.end())
    {
        return true;
    }
    else
    {
        auto res = std::distance(s.begin(), mis.first);
        return std::mismatch(mis.first + 1, s.end() - res, s.rbegin() + res).first == s.end() - res ||
               std::mismatch(mis.first, s.end() - (res + 1), s.rbegin() + (res + 1)).first == s.end() - (res + 1);
    }
}