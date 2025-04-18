pipeline {
    agent any
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Build") {
            agent { docker { image 'schemers/sagittarius'; args '--user=root' } }
            steps {
                sh 'apt-get update && apt-get install -y make libuv1'
                sh 'make'
                sh 'make install'
                sh 'make COMPILE_R7RS=sagittarius test-r6rs'
                sh 'make COMPILE_R7RS=sagittarius test-r7rs'
            }
        }
        stage("Test chez r6rs") {
            agent { docker { image 'schemers/chezscheme'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make COMPILE_R7RS=chibi test-r6rs-docker'
                }
            }
        }
        stage("Test chibi r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=chibi test-r7rs-docker'
                }
            }
        }
        stage("Test cyclone r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=cyclone test-r7rs-docker'
                }
            }
        }
        stage("Test foment r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=foment test-r7rs-docker'
                }
            }
        }
        stage("Test gauche r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=gauche test-r7rs-docker'
                }
            }
        }
        stage("Test guile r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=guile test-r6rs-docker'
                }
            }
        }
        stage("Test guile r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=guile test-r7rs-docker'
                }
            }
        }
        stage("Test ikarus r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=ikarus test-r7rs-docker'
                }
            }
        }
        stage("Test ironscheme r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=ironscheme test-r7rs-docker'
                }
            }
        }
        stage("Test kawa r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=kawa test-r7rs-docker'
                }
            }
        }
        stage("Test larceny r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=larceny test-r6rs-docker'
                }
            }
        }
        stage("Test larceny r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=larceny test-r7rs-docker'
                }
            }
        }
        stage("Test loko r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=loko test-r6rs-docker'
                }
            }
        }
        stage("Test loko r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=loko test-r7rs-docker'
                }
            }
        }
        stage("Test mit-scheme r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=mit-scheme test-r7rs'
                }
            }
        }
        stage("Test mosh r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=mosh test-r6rs-docker'
                }
            }
        }
        stage("Test mosh r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=mosh test-r7rs-docker'
                }
            }
        }
        stage("Test sagittarius r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=sagittarius test-r6rs-docker'
                }
            }
        }
        stage("Test sagittarius r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=sagittarius test-r6rs-docker'
                }
            }
        }
        stage("Test skint r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=skint test-r7rs-docker'
                }
            }
        }
        stage("Test tr7 r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=tr7 test-r7rs-docker'
                }
            }
        }
        stage("Test ypsilon r6rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=ypsilon test-r6rs-docker'
                }
            }
        }
        stage("Test ypsilon r7rs") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make COMPILE_R7RS=ypsilon test-r7rs-docker'
                }
            }
        }
    }
}
