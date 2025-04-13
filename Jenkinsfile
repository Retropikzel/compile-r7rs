pipeline {
    agent any
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Test chibi") {
            agent dockerfile
            steps {
                sh 'make SCHEME=chibi test-sagittarius'
            }
        }
        stage("Test guile") {
            agent dockerfile
            steps {
                sh 'make SCHEME=guile test-sagittarius'
            }
        }
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
