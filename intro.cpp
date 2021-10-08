#include <iostream>
using namespace std;

int main() {
    cout<<"Hello World!"<<endl;
    return 0;
}

git remote add origin git@github.com:josep177/kuliah.git
git init
git add .
git commit -m "testing"
git branch -M main
curl -u 'josep122' https://api.github.com/user/repos -d '{"name":"bebas","private":false}'
Nanti masukkin token yang sudah digenerate
git remote add origin git@github.com:usergithubmu/namarepoyangdibikintadi.git
git push -u origin main