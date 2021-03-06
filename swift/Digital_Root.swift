// Digital root of a number
func digitalRoot(of number: Int) -> Int {
  var sum: Int = 0
  let integerList = String(number).map { Int("\($0)")! }
  for i in integerList{
    let integer = Int(i)
    sum += integer
  }
  while String(sum).count > 1{
    sum = digitalRoot(of: sum)
  }
  return sum;
}
