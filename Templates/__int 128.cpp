istream &operator>>(istream &is, __int128 &v) {
    string s;
    is >> s;
    v = 0;
    bool negative = false;
    for (auto &it : s) {
        if (it == '-') {
            negative = true;
        } else if (isdigit(it)) {
            v = v * 10 + (it - '0');
        }
    }
    if (negative) v *= -1;
    return is;
}

ostream &operator<<(ostream &os, const __int128 &v) {
    if (v == 0) return (os << "0");
    __int128 num = v;
    if (v < 0) os << '-', num = -num;
    string s;
    while (num > 0) {
        s.push_back((char)(num % 10) + '0');
        num /= 10;
    }
    reverse(s.begin(), s.end());
    return (os << s);
}
