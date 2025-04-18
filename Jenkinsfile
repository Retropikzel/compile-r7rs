pipeline {
    agent any
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Clean docker cache") {
            steps {
                sh 'docker system prune -a -f'
            }
        }
        stage("Build") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=sagittarius' } }
            steps {
                sh 'make'
                sh 'make install'
                sh 'make test-r6rs'
                sh 'make test-r7rs'
            }
        }
        stage("chez r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=chezscheme' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("chibi r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=chibi' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("cyclone r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=cyclone' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("foment r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=foment' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("gauche r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=gauche' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("guile r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=guile' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("guile r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=guile' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("ikarus r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=ikarus' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("ironscheme r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=ironscheme' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("kawa r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=kawa' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("larceny r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=larceny' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("larceny r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=larceny' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("loko r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=loko' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("loko r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=loko' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("mit-scheme r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=mit-scheme' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("mosh r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=mosh' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("mosh r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=mosh' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("sagittarius r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=sagittarius' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("sagittarius r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=sagittarius' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("skint r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=skint' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("tr7 r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=tr7' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("ypsilon r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=ypsilon' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("ypsilon r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root'; additionalBuildArgs '--build-arg COMPILE_R7RS=ypsilon' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
    }
}
