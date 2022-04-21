num = 10/0 # WUUHUHUHUHUHUH

begin
  num = 10/0
rescue
  puts "Error"
end

begin
  num = 10/0
rescue ZeroDevisionError
  puts "Error"
rescue
  puts "All other errors"
end

raise "Raise me UPPP" # raise an exception


