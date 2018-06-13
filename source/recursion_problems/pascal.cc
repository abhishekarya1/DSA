int pascal(int row, int col) {
  if (col == 0 || col == row) return 1;
  else if(col == 1 || (col + 1) == row) return row;
  else return pascal(row - 1, col - 1) + pascal(row - 1, col);
}