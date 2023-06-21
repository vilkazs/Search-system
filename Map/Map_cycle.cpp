void PrintMap(const map<string, int>& m) {
    cout << "Size: "s << m.size() << endl;
    for (const auto& [key, value]: m) {
        cout << key << " - "s << value << endl;
    }
}