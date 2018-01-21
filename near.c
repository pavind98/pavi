int mod(int x, int y) {
  
  int ret = x % y;
  if(ret < 0) {
    ret += y;
  }
  return ret;
}
