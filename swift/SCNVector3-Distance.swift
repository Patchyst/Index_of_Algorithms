    func findDistance(vectorOne: SCNVector3, vectorTwo: SCNVector3){
        let distance = sqrt((vectorTwo.x - vectorOne.x) + (vectorTwo.y - vectorOne.y) + (vectorTwo.z - vectorOne.z))
        print(distance)
    }
