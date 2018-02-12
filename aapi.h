// ASPHYNIIX C API

/*
1: SETGLOBAL INTEGER
2: SETGLOBAL STRING
3: SETGLOBAL ARRAY
*/

string apushvalue(asphyState a, int index) {
AsphyniixStack AStack = GetCurrentStack(a);
int top = get_top(AStack);
return to_string(AStack.at(top-1)));
}

string toastring(asphyState a, int index) {
  string indexval = apushvalue(a,index);
  return to_string(indexval);
}

void apushnum(asphyState a, int num) {
  asetval(a, to_string(num), 1);
  inc_top(to_string(num));
}

void apushstring(asphyState a, string str) {
asetval(a, str.c_str(), 2);
inc_top(str.c_str());
}
