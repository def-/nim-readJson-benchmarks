import json, os

if paramCount() > 0:
  let data = parseFile paramStr(1)
  echo "JSON was parsed!"
else:
  echo "please pass JSON file to parse"