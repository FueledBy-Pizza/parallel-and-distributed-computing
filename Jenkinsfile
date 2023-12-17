pipeline {
    agent{
        label 'docker'
    }
    stages {
        stage('Build') {
            steps {
                sh 'echo Hello world!'
            }
        }
    }
    post {
        always {
            mineRepository{
                tool('GitInstallation')
                scm('Git')
            }
        }
    }
}
