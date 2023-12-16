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
        stage('My Post Action Stage') {
            steps{
                sh 'echo Hello world again!'
            }
            post{
                sh 'echo Hello world one last time!'
            }
        }
    }
}
