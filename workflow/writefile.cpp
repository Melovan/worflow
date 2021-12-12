#include "writefile.h"
WriteFile::WriteFile(const string& arguments){
    string s;
    args.push_back(s);
    for (char i : arguments){
        args[0].push_back(i);
    }
}


vector<string> WriteFile::get_result() {
    return vector<string>();
}


void WriteFile::parse_args(){
    string filename = args[0];
    file.open(filename);
    if(!file){
        throw runtime_error("writefile : file can not be opened");
    }
}


void WriteFile::do_work(vector<string> txt){
    parse_args();
    for (const auto& it : txt){
        file << it;
    }
    file.close();
}