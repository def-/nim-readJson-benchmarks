require 'json'

lib = JSON.parse File.read ARGV[0]

print "Ruby parsed #{lib['ngrams'].length} Objects"