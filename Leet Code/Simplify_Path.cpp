
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dirs;
        stringstream ss(path);
        string dir;
        while (getline(ss, dir, '/')) {
            if (dir == "" || dir == ".") {
                continue;
            } else if (dir == "..") {
                if (!dirs.empty()) {
                    dirs.pop_back();
                }
            } else {
                dirs.push_back(dir);
            }
        }
        if (dirs.empty()) {
            return "/";
        } else {
            string result;
            for (string dir : dirs) {
                result += "/" + dir;
            }
            return result;
        }
    }
};
