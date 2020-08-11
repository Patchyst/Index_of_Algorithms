    func findDistance(vectorOne: SCNVector3, vectorTwo: SCNVector3) -> Float{
        let distance = sqrt((vectorTwo.x - vectorOne.x) + (vectorTwo.y - vectorOne.y) + (vectorTwo.z - vectorOne.z))
        return distance
    }
