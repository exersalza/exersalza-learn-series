test_grades = {
  "Andy" => "B+",
  :Stanley => "C", # this is another key representation for dicts
  "Ryan" => "A",
  3 => 95.2
}

test_grades["Andy"] = "B-"
puts test_grades["Andy"]
puts test_grades[:Stanley]
puts test_grades[3]
