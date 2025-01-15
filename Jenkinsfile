pipeline {
    agent any
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Chibi") {
            agent {
                docker {
                    image 'schemers/chibi'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=chibi-scheme test'
                }
            }
        }
        stage("Chicken interpreter") {
            agent {
                docker {
                    image 'schemers/chicken'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=csi test'
                }
            }
        }
        stage("Chicken compiler") {
            agent {
                docker {
                    image 'schemers/chicken'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=csc test'
                }
            }
        }
        stage("Cyclone interpreter") {
            agent {
                docker {
                    image 'schemers/cyclone'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=cyclone test'
                }
            }
        }
        stage("Foment") {
            agent {
                docker {
                    image 'schemers/foment'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=foment test'
                }
            }
        }
        stage("Gambit interpreter") {
            agent {
                docker {
                    image 'schemers/gambit'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=gsi test'
                }
            }
        }
        stage("Gambit compiler") {
            agent {
                docker {
                    image 'schemers/gambit'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=gsc test'
                }
            }
        }
        stage("Gauche") {
            agent {
                docker {
                    image 'schemers/gauche'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=gosh test'
                }
            }
        }
        stage("Gerbil interpreter") {
            agent {
                docker {
                    image 'schemers/gerbil'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=gxi test'
                }
            }
        }
        stage("Gerbil compiler") {
            agent {
                docker {
                    image 'schemers/gerbil'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=gxc test'
                }
            }
        }
        stage("Guile") {
            agent {
                docker {
                    image 'schemers/guile'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=guile test'
                }
            }
        }
        stage("Kawa") {
            agent {
                docker {
                    image 'schemers/kawa'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=kawa test'
                }
            }
        }
        stage("Larceny") {
            agent {
                docker {
                    image 'schemers/larceny'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=larceny test'
                }
            }
        }
        stage("Loko") {
            agent {
                docker {
                    image 'schemers/loko'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=loko test'
                }
            }
        }
        stage("Mit-scheme") {
            agent {
                docker {
                    image 'schemers/mit-scheme'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=mit-scheme test'
                }
            }
        }
        stage("Mosh") {
            agent {
                docker {
                    image 'schemers/mosh'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=mosh test'
                }
            }
        }
        stage("Picrin") {
            agent {
                docker {
                    image 'schemers/picrin'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=picrin test'
                }
            }
        }
        stage("Racket") {
            agent {
                docker {
                    image 'schemers/racket'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=racket test'
                }
            }
        }
        stage("Racket.exe") {
            agent {
                docker {
                    image 'schemers/racket'
                     reuseNode true
                     args '--user=root'
                }
            }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCC=racket test'
                }
            }
        }
        stage("Sagittarius") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=sagittarius test'
                }
            }
        }
        stage("Skint") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=skint test'
                }
            }
        }
        stage("Snow-chibi") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=snow-chibi test'
                }
            }
        }
        stage("STklos") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=stklos test'
                }
            }
        }
        stage("tr7") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=tr7 test'
                }
            }
        }
        stage("Ypsilon") {
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make SCHEME=ypsilon test'
                }
            }
        }
    }
}
