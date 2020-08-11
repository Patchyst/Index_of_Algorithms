// Function returns the distance between two SCNVector arrays. Helpful for finding the distance between two SCNNodes in ARkit
func findDistance(vectorOne: SCNVector3, vectorTwo: SCNVector3) -> Float{
     let distance = sqrt(pow((vectorTwo.x - vectorOne.x)) + pow((vectorTwo.y - vectorOne.y)) + pow((vectorTwo.z - vectorOne.z)))
     return distance
}
