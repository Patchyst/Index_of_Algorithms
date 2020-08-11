// Function returns the distance between two SCNVector arrays. Helpful for finding the distance between two SCNNodes in ARkit
func findDistance(vectorOne: SCNVector3, vectorTwo: SCNVector3) -> Float{
     let distance = sqrt(pow((vectorTwo.x - vectorOne.x), 2) + pow((vectorTwo.y - vectorOne.y), 2) + pow((vectorTwo.z - vectorOne.z), 2))
     return distance
}
