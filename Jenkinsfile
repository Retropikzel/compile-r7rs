pipeline {
    agent any
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Build") {
            agent dockerfile
            steps {
                sh 'make'
            }
        }
        stage("Build exe") {
            agent dockerfile
            steps {
                sh 'make build-exe'
            }
        }
    }
}
