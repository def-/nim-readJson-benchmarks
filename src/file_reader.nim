import json, os

if paramCount() > 0:
  let data = readFile paramStr(1)
  echo "file was read!"
else:
  echo "please pass JSON file to read"