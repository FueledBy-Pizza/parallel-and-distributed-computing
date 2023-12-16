pipeline {
    agent {
        label 'docker'
    }
    stages {
        stage('Build') {
            steps {
                sh 'echo Hello world!'
            }
        }

        stage('My Post ACtion Stage') {
            post{
                always{
                    sh 'echo End Pipeline'
                }
            }
        }
    }
}
