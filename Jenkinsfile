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
                io.jenkins.plugins.forensics.miner.RepositoryMinerStep mineRepository = new io.jenkins.plugins.forensics.miner.RepositoryMinerStep()
                mineRepository.tool('GitInstallation')
                mineRepository.scm('Git')
                mineRepository.perform(this)
            }
        }
    }
}
