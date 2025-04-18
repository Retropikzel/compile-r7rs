pipeline {
    agent {
        dockerfile {
            filename 'Dockerfile.jenkins'
        }
    }
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Build") {
            agent {
                  docker {
                      image 'schemers/sagittarius'
                  }
            }
            steps {
                sh 'make'
                sh 'make install'
                sh 'make SCHEME=sagittarius test-r6rs'
                sh 'make SCHEME=sagittarius test-r7rs'
            }
        }
        stage("Test chez r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=chibi test-r6rs-docker'
                }
            }
        }
        stage("Test chibi r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=chibi test-r7rs-docker'
                }
            }
        }
        stage("Test cyclone r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=cyclone test-r7rs-docker'
                }
            }
        }
        stage("Test foment r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=foment test-r7rs-docker'
                }
            }
        }
        stage("Test gauche r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=gauche test-r7rs-docker'
                }
            }
        }
        stage("Test guile r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=guile test-r6rs-docker'
                }
            }
        }
        stage("Test guile r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=guile test-r7rs-docker'
                }
            }
        }
        stage("Test ikarus r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=ikarus test-r7rs-docker'
                }
            }
        }
        stage("Test ironscheme r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=ironscheme test-r7rs-docker'
                }
            }
        }
        stage("Test kawa r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=kawa test-r7rs-docker'
                }
            }
        }
        stage("Test larceny r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=larceny test-r6rs-docker'
                }
            }
        }
        stage("Test larceny r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=larceny test-r7rs-docker'
                }
            }
        }
        stage("Test loko r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=loko test-r6rs-docker'
                }
            }
        }
        stage("Test loko r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=loko test-r7rs-docker'
                }
            }
        }
        stage("Test mit-scheme r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=mit-scheme test-r7rs'
                }
            }
        }
        stage("Test mosh r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=mosh test-r6rs-docker'
                }
            }
        }
        stage("Test mosh r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=mosh test-r7rs-docker'
                }
            }
        }
        stage("Test sagittarius r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=sagittarius test-r6rs-docker'
                }
            }
        }
        stage("Test sagittarius r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=sagittarius test-r6rs-docker'
                }
            }
        }
        stage("Test skint r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=skint test-r7rs-docker'
                }
            }
        }
        stage("Test tr7 r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=tr7 test-r7rs-docker'
                }
            }
        }
        stage("Test ypsilon r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=ypsilon test-r6rs-docker'
                }
            }
        }
        stage("Test ypsilon r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=ypsilon test-r7rs-docker'
                }
            }
        }
    }
}
