#include "num_vector_utils.h"

string render_num_vector(const vector<int>& v) {
    string s = "";
    for (int i = 0; i < v.size(); i++)
    {
	if (i == v.size()-1)
	{
	    string temp = to_string(v[i]);
	    s = s + temp;
	}
	else
	{
            string temp = to_string(v[i]);
            s+=temp+" ";
	}
    }
    return s;
}
